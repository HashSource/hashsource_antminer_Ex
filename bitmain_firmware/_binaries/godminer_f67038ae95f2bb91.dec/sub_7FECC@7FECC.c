int __fastcall sub_7FECC(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r6
  int v5; // r10
  _DWORD *v6; // r5
  _DWORD *ptr; // [sp+4Ch] [bp-1040h]
  int v10; // [sp+54h] [bp-1038h] BYREF
  _DWORD v11[2]; // [sp+58h] [bp-1034h] BYREF
  __int16 v12; // [sp+60h] [bp-102Ch]
  __int16 v13; // [sp+62h] [bp-102Ah]
  int v14; // [sp+64h] [bp-1028h]
  _DWORD v15[7]; // [sp+68h] [bp-1024h] BYREF
  int v16; // [sp+84h] [bp-1008h]
  char v17[4100]; // [sp+88h] [bp-1004h] BYREF

  v3 = 0;
  v12 = 1;
  v11[1] = 0;
  v10 = 0;
  v11[0] = 0;
  v14 = a2;
  v13 = a3;
  ptr = calloc(0x60u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 300))(a1, v11, 8, ptr, &v10);
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "%s response_num %d", "ChipSetting_get_single_core_status_ETH", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_get_single_core_status_ETH",
    38,
    1981,
    0x28u,
    v17);
  v5 = v10;
  if ( v10 > 0 )
  {
    v6 = ptr;
    do
    {
      V_LOCK();
      ++v3;
      v6 += 3;
      V_INT((int)v15, "chain", *(int *)(a1 + 248));
      logfmt_raw(
        v17,
        0x1000u,
        0,
        v16,
        v15[0],
        v15[1],
        v15[2],
        v15[3],
        v15[4],
        v15[5],
        v15[6],
        v16,
        "[Core State] asic %02x core %02x reg %02x state %08x",
        *((unsigned __int8 *)v6 - 8),
        *((unsigned __int8 *)v6 - 4),
        a3,
        bswap32(*(v6 - 3)));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/chip_setting.c",
        153,
        "ChipSetting_get_single_core_status_ETH",
        38,
        1984,
        40,
        v17);
      v5 = v10;
    }
    while ( v10 > v3 );
  }
  free(ptr);
  return v5;
}
