int __fastcall sub_1FD48C(int a1, _DWORD **a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // lr

  v3 = sub_1DE1C4(**a2, a3);
  v4 = (_DWORD *)sub_26C1C4(v3);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 18;
  v5 = v4 + 4;
  *v5 = 0;
  return v3;
}
