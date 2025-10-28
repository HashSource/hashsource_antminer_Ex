void __fastcall sub_180158(const char *a1, int a2)
{
  _BYTE *v4; // r4
  int v5; // [sp+0h] [bp-Ch] BYREF
  void *ptr; // [sp+4h] [bp-8h] BYREF

  if ( !sub_22EBE4(a1) )
    sub_94708("The program is not being run.");
  sub_17E890();
  sub_17E8AC();
  sub_17E8EC();
  if ( !a1 )
    sub_51EC4("a location");
  sub_17EBFC(&ptr, a1, &v5);
  v4 = ptr;
  sub_18012C((int)&dword_4899A0, v5);
  sub_DB7DC(v4, a2, 1);
  if ( ptr )
    free(ptr);
}
