int __fastcall hs_blake2b_init(_DWORD *a1, unsigned int a2)
{
  unsigned __int8 v5[4]; // [sp+8h] [bp-44h] BYREF
  int v6; // [sp+Ch] [bp-40h] BYREF
  int v7; // [sp+10h] [bp-3Ch] BYREF
  int v8; // [sp+14h] [bp-38h] BYREF
  char v9; // [sp+18h] [bp-34h]
  char v10; // [sp+19h] [bp-33h]
  _BYTE v11[46]; // [sp+1Ah] [bp-32h] BYREF

  if ( !a2 || a2 > 0x40 )
    return -1;
  v5[0] = a2;
  v5[1] = 0;
  v5[2] = 1;
  v5[3] = 1;
  sub_246E80(&v6, 0);
  sub_246E80(&v7, 0);
  sub_246E80(&v8, 0);
  v9 = 0;
  v10 = 0;
  memset(v11, 0, sizeof(v11));
  return hs_blake2b_init_param(a1, v5);
}
