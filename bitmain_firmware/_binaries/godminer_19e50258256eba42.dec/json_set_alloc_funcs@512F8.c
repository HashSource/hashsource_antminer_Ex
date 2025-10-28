void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  off_597C0C = result;
  off_597C10 = a2;
  return result;
}
