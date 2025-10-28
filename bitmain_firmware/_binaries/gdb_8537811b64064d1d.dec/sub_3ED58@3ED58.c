int __fastcall sub_3ED58(const char *a1)
{
  char *v2; // r0

  v2 = dlerror();
  return sub_946D8("Symbol \"%s\" not found in libthread_db: %s", a1, v2);
}
