int __fastcall dhash_start_ckb(int a1)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  int v5; // [sp+28h] [bp-1020h] BYREF
  _BYTE v6[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
    174,
    "dhash_start_ckb",
    15,
    474,
    40,
    v6);
  sub_65480(a1);
  v3 = *(unsigned __int8 *)(a1 + 428);
  result = 0;
  *(_BYTE *)(a1 + 229) = 1;
  if ( !v3 )
    *(_DWORD *)(a1 + 432) = (int)*(float *)(a1 + 924);
  return result;
}
