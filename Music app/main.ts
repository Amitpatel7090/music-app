import { Application, Router, send } from "https://deno.land/x/oak/mod.ts";
import { dirname, join } from "https://deno.land/std/path/mod.ts";
import { fromFileUrl } from "https://deno.land/std/path/mod.ts";
const app = new Application();
const router = new Router();

// Get the directory name of the current module
const currentDir = dirname(fromFileUrl(import.meta.url));

// Serve index.html at the root
router.get('/', async (context) => {
  const indexPath = join(currentDir, 'index.html');
  context.response.body = await Deno.readTextFile(indexPath);
});

// Serve static files (CSS, JS, images, etc.)
app.use(async (context, next) => {
  const path = context.request.url.pathname;
  const fileExtensions = ['.css', '.js', '.jpg', '.webp', '.gif', '.mp3'];
  const isStaticFile = fileExtensions.some(ext => path.endsWith(ext));
  if (isStaticFile) {
    await send(context, context.request.url.pathname, {
      root: currentDir,
    });
  } else {
    await next();
  }
});

app.use(router.routes());
app.use(router.allowedMethods());

console.log(`Server running on http://localhost:8000`);
// Uncomment the line below before deploying or running locally
await app.listen({ port: 8000 });