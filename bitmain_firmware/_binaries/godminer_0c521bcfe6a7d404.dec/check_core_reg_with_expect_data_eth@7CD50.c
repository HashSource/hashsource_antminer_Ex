int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r0
  int v7; // r7
  char *v8; // r4
  char *v9; // r8
  unsigned int v10; // r6
  int v11; // r0
  int v13; // [sp+3Ch] [bp-14h]
  char *ptr; // [sp+40h] [bp-10h]
  int v15; // [sp+44h] [bp-Ch]
  int v16; // [sp+48h] [bp-8h]
  int v18; // [sp+50h] [bp+0h] BYREF
  _BYTE var1004[4112]; // [sp+70h] [bp+20h] BYREF

  v16 = a3;
  ptr = (char *)malloc(0x600u);
  v15 = 5;
  while ( 1 )
  {
    v6 = sub_76268(a1, v16, a4, ptr);
    v13 = v6;
    if ( !v6 )
    {
LABEL_10:
      free(ptr);
      return 22;
    }
    v7 = 0;
    v8 = ptr;
    v9 = &ptr[12 * v6];
    v10 = bswap32(a5);
    do
    {
      if ( (v10 & ~*(_DWORD *)v8) != 0 )
      {
        V_LOCK(v6);
        V_INT((int)&v18, "chain");
        v11 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v11);
        v6 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
               177,
               "check_core_reg_with_expect_data_eth",
               35,
               760,
               100,
               var1004);
      }
      else
      {
        ++v7;
      }
      v8 += 12;
    }
    while ( v9 != v8 );
    if ( v7 == v13 )
      break;
    usleep(0x7A120u);
    if ( !--v15 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
