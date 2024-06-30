import { Application, Router } from "https://deno.land/x/oak/mod.ts";

const app = new Application();
const router = new Router();

router.get('/', async (context) => {
  context.response.body = await Deno.readTextFile('./index.html');
});

app.use(router.routes());
app.use(router.allowedMethods());

await app.listen({ port: 8000 });
console.log(`Server running on http://localhost:8000`);
