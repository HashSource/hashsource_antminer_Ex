int __fastcall sub_277138(int a1)
{
  int v2; // r4
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_2305B8((char **)&ptr, a1, 11, "target.xml");
  if ( !ptr )
    return 0;
  v2 = sub_276F08((const char *)ptr, (int)sub_276DAC, a1);
  if ( ptr )
    free(ptr);
  return v2;
}
