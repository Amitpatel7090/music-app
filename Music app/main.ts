import { Application, Router, send } from "https://deno.land/x/oak/mod.ts";

const app = new Application();
const router = new Router();

// Serve index.html at the root
router.get('/', async (context) => {
  context.response.body = await Deno.readTextFile('index.html');
});

// Serve static files (CSS, JS, images)
app.use(async (context, next) => {
  const path = context.request.url.pathname;
  const fileExtensions = ['.css', '.js', '.jpg', '.webp', '.gif','.mp3'];
  const isStaticFile = fileExtensions.some(ext => path.endsWith(ext));
  if (isStaticFile) {
    await send(context, context.request.url.pathname, {
      root: `${Deno.cwd()}`,
    });
  } else {
    await next();
  }
});

app.use(router.routes());
app.use(router.allowedMethods());

console.log(`Server running on http://localhost:8000`);
// await app.listen({ port: 8000 });