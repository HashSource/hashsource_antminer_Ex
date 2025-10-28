_DWORD *sub_92DF0()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r1

  v0 = (_DWORD *)sub_930BC(1, 0x1A8u);
  v0[100] = 0;
  v1 = v0;
  v0[101] = 0;
  v0[102] = 0;
  v0[103] = sub_92688();
  v2 = dword_475210;
  dword_475210 = (int)v1;
  v1[104] = v2;
  *v1 = 0;
  return v1 + 2;
}
