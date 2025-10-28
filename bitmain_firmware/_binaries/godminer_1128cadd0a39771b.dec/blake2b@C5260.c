int __fastcall blake2b(_DWORD *a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD v13[4]; // [sp+0h] [bp-F8h] BYREF
  int v14; // [sp+10h] [bp-E8h]
  int v15; // [sp+14h] [bp-E4h]
  int v16; // [sp+18h] [bp-E0h]
  int v17; // [sp+1Ch] [bp-DCh]
  _BYTE v18[216]; // [sp+20h] [bp-D8h] BYREF

  blake2b_init((int)v18, 32, 0, 0);
  blake2b_update((int)v18, a2, a3);
  blake2b_final((int)v18, (int)v13);
  v6 = v13[1];
  v7 = v13[2];
  v8 = v13[3];
  *a1 = v13[0];
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v8;
  result = v14;
  v10 = v15;
  v11 = v16;
  v12 = v17;
  a1[4] = v14;
  a1[5] = v10;
  a1[6] = v11;
  a1[7] = v12;
  return result;
}
