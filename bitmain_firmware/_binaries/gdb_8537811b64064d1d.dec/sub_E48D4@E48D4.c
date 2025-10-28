_DWORD *__fastcall sub_E48D4(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0

  v6 = sub_93050(0x20u);
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  *v6 = a1;
  v7 = a2;
  if ( a2 )
    v7 = sub_32727C(a2);
  v6[3] = v7;
  v6[7] = a3;
  v6[5] = 0;
  v6[4] = 0;
  return v6;
}
