int __fastcall dhash_start_zec_1746(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v5; // r3
  int result; // r0
  int v7; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+48h] [bp-1004h] BYREF
  int v9; // [sp+4Ch] [bp-1000h]
  int v10; // [sp+50h] [bp-FFCh]
  int v11; // [sp+54h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)&v7, "chain");
  v2 = logfmt_raw((int)&v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    170,
    "dhash_start_zec_1746",
    20,
    715,
    40,
    &v8);
  v10 = 2621440;
  v11 = 0;
  v8 = (int)&stru_14820;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 228);
  v9 = 0;
  LOBYTE(v10) = 1;
  v3(a1, &v8);
  v10 = 5242881;
  v11 = 0;
  v9 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 228);
  v8 = 0;
  v4(a1, &v8);
  v10 = 5767169;
  v11 = 0;
  v9 = 0;
  v8 = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 228))(a1, &v8);
  (*(void (__fastcall **)(int))(a1 + 148))(a1);
  v5 = *(unsigned __int8 *)(a1 + 420);
  result = 0;
  *(_BYTE *)(a1 + 217) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  return result;
}
