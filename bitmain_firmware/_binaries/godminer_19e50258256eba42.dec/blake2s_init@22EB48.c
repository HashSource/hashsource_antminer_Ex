int __fastcall blake2s_init(void *a1, unsigned __int8 a2)
{
  _BYTE v5[4]; // [sp+8h] [bp-24h] BYREF
  int v6; // [sp+Ch] [bp-20h] BYREF
  _BYTE v7[24]; // [sp+10h] [bp-1Ch] BYREF

  if ( !a2 || a2 > 0x20u )
    return -1;
  v5[0] = a2;
  v5[1] = 0;
  v5[2] = 1;
  v5[3] = 1;
  sub_22E72C(&v6, 0);
  sub_22E7DC((int)v7, 0);
  memset(&v7[6], 0, 18);
  return blake2s_init_param(a1, (int)v5);
}
