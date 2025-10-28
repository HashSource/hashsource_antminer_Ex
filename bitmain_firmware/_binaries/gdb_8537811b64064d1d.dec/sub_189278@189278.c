void __fastcall sub_189278(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r8
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r6
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3

  v2 = (_DWORD *)((int (*)(void))loc_23DC0C)();
  v3 = sub_1DDBE4(v2);
  v4 = sub_1DD5B4(v3);
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[10];
  v2[36] = *a1;
  v2[37] = v5;
  v2[38] = v6;
  v2[39] = v7;
  v9 = v8 == v4;
  v10 = a1[4];
  v11 = a1[5];
  v12 = a1[6];
  v13 = a1[7];
  dword_4878F8 = a1[8];
  v2[40] = v10;
  v2[41] = v11;
  v2[42] = v12;
  v2[43] = v13;
  if ( v9 )
  {
    ((int (__fastcall *)(int))loc_16CAE8)(v8);
    v10 = sub_23056C(&dword_4899A0, 16);
  }
  if ( sub_22EBE4(v10) )
    ((void (__fastcall *)(int, _DWORD))loc_1DE540)(v3, a1[9]);
  sub_18921C(a1);
}
