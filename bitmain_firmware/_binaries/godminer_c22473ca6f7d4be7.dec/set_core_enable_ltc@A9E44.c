int __fastcall set_core_enable_ltc(int a1, int a2, __useconds_t a3)
{
  int v3; // r5
  int v7; // r10
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    *(_BYTE *)(a2 + 12) = v3;
    *(_BYTE *)(a2 + 15) = 0;
    *(_DWORD *)a2 = 34047;
    *(_WORD *)(a2 + 10) = 0;
    *(_BYTE *)(a2 + 14) = 0;
    v7 = (*(int (__fastcall **)(int, int))(a1 + 164))(a1, a2);
    if ( v7 )
      break;
    usleep(a3);
    if ( *(unsigned __int8 *)(a2 + 13) <= ++v3 )
      return 0;
  }
  V_LOCK();
  LOWORD(v8) = 23072;
  HIWORD(v8) = (unsigned int)"f" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v8, "set_core_enable_ltc", *(unsigned __int16 *)(a2 + 10), v3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -14040;
  HIWORD(v10) = (unsigned int)"er-origin_master/backend/backend_hns/backend_hns.c" >> 16;
  zlog(*v9, v10, 158, "set_core_enable_ltc", 19, 408, 100, v12);
  return v7;
}
