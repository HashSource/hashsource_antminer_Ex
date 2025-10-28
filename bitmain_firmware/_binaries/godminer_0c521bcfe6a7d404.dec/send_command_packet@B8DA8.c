int __fastcall send_command_packet(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int i; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v13; // r0
  _BYTE v14[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 872);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 872)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( (*(int (__fastcall **)(_DWORD))(v8 + 64))(*(_DWORD *)(a1 + 220)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = (*(int (__fastcall **)(_DWORD, int, unsigned int))(v9 + 56))(*(_DWORD *)(a1 + 220), a2, a3);
  v11 = pthread_mutex_unlock(v3);
  if ( v10 <= 0 )
  {
    V_LOCK(v11);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_reg_io_interface.c",
      162,
      "send_command_packet",
      19,
      44,
      100,
      v14);
  }
  return v10;
}
