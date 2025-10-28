int __fastcall sub_21ABAC(_BYTE *a1)
{
  int v2; // [sp+0h] [bp-14h] BYREF
  _DWORD v3[3]; // [sp+4h] [bp-10h] BYREF

  v2 = 0;
  v3[0] = &v2;
  v3[1] = v3;
  v3[2] = &loc_219800;
  sub_21AA4C(a1, (int)v3, (int)&loc_219800);
  return v2;
}
