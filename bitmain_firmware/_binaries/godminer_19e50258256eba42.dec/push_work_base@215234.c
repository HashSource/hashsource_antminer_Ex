int __fastcall push_work_base(int a1, int a2)
{
  int (**v3)(); // r0
  unsigned int v4; // r0
  int (**v5)(); // r0
  _BYTE v9[32]; // [sp+1Ch] [bp-1020h] BYREF
  unsigned int v10; // [sp+101Ch] [bp-20h] BYREF
  int v11; // [sp+1020h] [bp-1Ch]
  void *ptr; // [sp+1024h] [bp-18h]

  if ( *(_BYTE *)(a1 + 279) != 1 && *(_BYTE *)(a1 + 278) != 1 )
    return 13;
  ptr = calloc(1u, *(_DWORD *)(a1 + 880));
  v10 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 80))(a1, a2, ptr, &v10);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 992));
  do
  {
    v3 = dev_ctrl();
    v4 = ((int (__fastcall *)(_DWORD))v3[22])(*(_DWORD *)(a1 + 264));
  }
  while ( v4 < v10 );
  v5 = dev_ctrl();
  v11 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v5[16])(*(_DWORD *)(a1 + 264), ptr, v10);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 992));
  sub_213220(a1 + 1144, v10, (unsigned __int8 *)ptr, *(_DWORD *)(a1 + 272));
  if ( v11 > 0 )
  {
    ++*(_QWORD *)(a1 + 480);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 264), v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_base.c",
      150,
      "push_work_base",
      14,
      551,
      100,
      v9);
  }
  free(ptr);
  return 0;
}
