int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  unsigned __int8 *v5; // r5
  unsigned int v6; // r0
  int (**v7)(); // r0
  int (**v8)(); // r0
  int v9; // r6
  int v11; // r1
  unsigned int v12; // [sp+14h] [bp-101Ch] BYREF
  char v13[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 254) && !*(_BYTE *)(a1 + 253) )
    return 13;
  v4 = (pthread_mutex_t *)(a1 + 948);
  v5 = (unsigned __int8 *)calloc(1u, *(_DWORD *)(a1 + 840));
  v12 = 0;
  (*(void (__fastcall **)(int, int, unsigned __int8 *, unsigned int *))(a1 + 64))(a1, a2, v5, &v12);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = ((int (__fastcall *)(_DWORD))v7[21])(*(_DWORD *)(a1 + 240));
  }
  while ( v6 < v12 );
  v8 = dev_ctrl(v6);
  v9 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v8[16])(*(_DWORD *)(a1 + 240), v5, v12);
  pthread_mutex_unlock(v4);
  check_and_print_uart_debug_log(a1 + 1088, v12, v5, *(_DWORD *)(a1 + 248), 1);
  if ( v9 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 240), v9);
    V_UNLOCK();
    LOWORD(v11) = 27564;
    HIWORD(v11) = (unsigned int)algn_176B94 >> 16;
    zlog(g_zc, v11, 153, "push_work_base", 14, 544, 100, v13);
  }
  else
  {
    ++*(_QWORD *)(a1 + 440);
  }
  free(v5);
  return 0;
}
