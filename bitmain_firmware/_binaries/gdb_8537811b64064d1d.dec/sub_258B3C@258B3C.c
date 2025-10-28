void __fastcall sub_258B3C(char *a1)
{
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v2; // [sp+8h] [bp-14h] BYREF

  sub_2587E8(&ptr, a1);
  sub_946D8("%s", (const char *)ptr);
  if ( ptr != &v2 )
    sub_339E8C(ptr);
}
