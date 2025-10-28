int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r4
  int v9; // r0
  int v11; // [sp+4h] [bp-1014h]
  int v12; // [sp+14h] [bp-1004h] BYREF
  _BYTE v13[4096]; // [sp+18h] [bp-1000h] BYREF

  puts("set_core_enable_base2");
  v7 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (v8 & 0x1F) == 0 )
    {
      v6 = *(unsigned __int16 *)(a2 + 10) + (v8 >> 5);
      *(_WORD *)(a2 + 10) = v6;
    }
    if ( v7 > 1 )
      *(_BYTE *)(a2 + 12) = v8;
    if ( (*(int (__fastcall **)(int, int, int))(a1 + 236))(a1, a2, v6) < 0 )
      break;
    usleep(a3);
    v12 = 0;
    (*(void (__fastcall **)(int, int, int, _BYTE *, int *, int, int, _DWORD))(a1 + 256))(
      a1,
      a2,
      1,
      v13,
      &v12,
      v11,
      2000,
      0);
    v7 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v7 <= ++v8 )
      return 0;
  }
  V_LOCK(a3);
  v9 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_reg_io_base.c",
    153,
    "set_core_enable_base2",
    21,
    955,
    100,
    v13);
  return 3;
}
