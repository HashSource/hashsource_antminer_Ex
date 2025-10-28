_DWORD *sub_1890E4()
{
  _DWORD *v0; // r6
  int v1; // r7
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r3
  size_t v12; // r8
  void *v13; // r10
  _DWORD *v14; // r4

  v0 = (_DWORD *)((int (*)(void))loc_23DC0C)();
  v1 = sub_1DDBE4(v0);
  v2 = sub_1DD5B4(v1);
  if ( ((int (*)(void))loc_16CA9C)() )
  {
    v12 = *(_DWORD *)(((int (__fastcall *)(int))loc_16CAE8)(v2) + 20);
    v13 = sub_93050(v12);
    v14 = sub_92564(1598464, (int)v13);
    if ( v12 == sub_22FF30(&dword_4899A0, 16) )
    {
      sub_92668(v14);
      v3 = sub_930BC(1u, 0x30u);
      v3[10] = v2;
      v3[11] = v13;
      goto LABEL_3;
    }
    sub_92648(v14);
  }
  v3 = sub_930BC(1u, 0x30u);
LABEL_3:
  v4 = v0[37];
  v5 = v0[38];
  v6 = v0[39];
  v7 = dword_4878F8;
  *v3 = v0[36];
  v3[1] = v4;
  v3[2] = v5;
  v3[3] = v6;
  v8 = v0[41];
  v9 = v0[42];
  v10 = v0[43];
  v3[4] = v0[40];
  v3[5] = v8;
  v3[6] = v9;
  v3[7] = v10;
  v0[36] = 0;
  v3[8] = v7;
  v3[9] = sub_1DD824(v1);
  return v3;
}
