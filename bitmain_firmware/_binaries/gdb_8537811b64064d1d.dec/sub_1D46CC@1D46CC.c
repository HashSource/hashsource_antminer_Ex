int __fastcall sub_1D46CC(_BYTE *a1, int a2)
{
  void *v3; // r5

  if ( a1 && *a1 )
    sub_94708("Invalid argument.");
  dword_487D6C = 1;
  v3 = sub_92E50();
  sub_2435D8("target record-btrace", a2);
  return sub_92E68((int)v3);
}
