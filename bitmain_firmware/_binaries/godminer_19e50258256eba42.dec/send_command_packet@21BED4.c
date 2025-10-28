int __fastcall send_command_packet(int a1, unsigned __int8 *a2, unsigned int a3)
{
  int (**v3)(); // r0
  int (**v4)(); // r0
  _BYTE v9[8]; // [sp+24h] [bp-1008h] BYREF
  int v10; // [sp+1024h] [bp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 968));
  v10 = 0;
  while ( 1 )
  {
    v3 = dev_ctrl();
    if ( ((int (__fastcall *)(_DWORD))v3[21])(*(_DWORD *)(a1 + 264)) >= a3 )
      break;
    usleep(0x2710u);
  }
  v4 = dev_ctrl();
  v10 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v4[17])(*(_DWORD *)(a1 + 264), a2, a3);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 968));
  sub_21BE30(a1 + 1144, a3, a2, *(_DWORD *)(a1 + 272));
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "device %d send cmd failed, errcode %d ", *(_DWORD *)(a1 + 264), v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_interface.c",
      159,
      "send_command_packet",
      19,
      46,
      100,
      v9);
  }
  return v10;
}
