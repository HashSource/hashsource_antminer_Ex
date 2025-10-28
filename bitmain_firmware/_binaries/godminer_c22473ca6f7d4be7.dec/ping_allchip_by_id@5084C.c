int __fastcall ping_allchip_by_id(int a1)
{
  void *v2; // r5
  int v4; // [sp+14h] [bp-14h] BYREF
  _DWORD v5[4]; // [sp+18h] [bp-10h] BYREF

  v5[2] = 1;
  v5[0] = 0;
  v5[1] = 0;
  v5[3] = 0;
  v2 = calloc(0x100u, 0xCu);
  v4 = 0;
  sync_get_chip_reg_by_id(a1, (int)v5, 256, (int)v2, (int)&v4);
  free(v2);
  return v4;
}
