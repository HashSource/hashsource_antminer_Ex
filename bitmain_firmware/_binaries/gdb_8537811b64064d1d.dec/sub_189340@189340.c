char *sub_189340()
{
  char *v0; // r4
  _DWORD *v1; // r5
  int v2; // r7
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  unsigned __int64 v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r12
  _DWORD v12[7]; // [sp+0h] [bp-1Ch] BYREF

  v0 = (char *)sub_93050(0x80u);
  v1 = (_DWORD *)((int (*)(void))loc_23DC0C)();
  v2 = sub_1836B0();
  memcpy(v0, v1 + 12, 0x60u);
  v3 = (_DWORD *)v1[34];
  *((_DWORD *)v0 + 24) = *(_DWORD *)(v2 + 24);
  v1[12] = 0;
  v1[13] = 0;
  v4 = sub_D3D18(v3);
  v5 = __PAIR64__(dword_48790C, dword_487910);
  v1[34] = v4;
  *(_QWORD *)(v0 + 100) = v5;
  v6 = sub_15F810(0);
  ((void (__fastcall *)(_DWORD *, int))loc_15CFC8)(v12, v6);
  v7 = v12[1];
  v8 = v12[2];
  v9 = v12[3];
  v10 = v12[4];
  *((_DWORD *)v0 + 27) = v12[0];
  *((_DWORD *)v0 + 28) = v7;
  *((_DWORD *)v0 + 29) = v8;
  *((_DWORD *)v0 + 30) = v9;
  *((_DWORD *)v0 + 31) = v10;
  return v0;
}
