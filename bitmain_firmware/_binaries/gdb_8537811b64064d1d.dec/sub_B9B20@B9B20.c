int __fastcall sub_B9B20(int a1, int a2)
{
  int v2; // r0
  int v4; // [sp+4h] [bp-4h]

  v2 = dword_47823C;
  if ( !dword_47823C )
  {
    v4 = a2;
    sub_B9AC4();
    v2 = dword_47823C;
    a2 = v4;
  }
  return sub_5AA00(v2, a2, (int)"");
}
