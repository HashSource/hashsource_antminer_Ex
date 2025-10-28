int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  void *v5; // r6
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v12; // r0
  unsigned int v13; // [sp+14h] [bp-101Ch] BYREF
  _BYTE v14[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 218) && !*(_BYTE *)(a1 + 217) )
    return 13;
  v4 = (pthread_mutex_t *)(a1 + 888);
  v5 = calloc(1u, *(_DWORD *)(a1 + 792));
  v13 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 64))(a1, a2, v5, &v13);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = (*(int (__fastcall **)(_DWORD))(v7 + 68))(*(_DWORD *)(a1 + 208));
  }
  while ( v6 < v13 );
  v8 = dev_ctrl(v6);
  v9 = (*(int (__fastcall **)(_DWORD, void *, unsigned int))(v8 + 52))(*(_DWORD *)(a1 + 208), v5, v13);
  v10 = pthread_mutex_unlock(v4);
  if ( v9 <= 0 )
  {
    V_LOCK(v10);
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_base.c",
      149,
      "push_work_base",
      14,
      368,
      100,
      v14);
  }
  else
  {
    ++*(_QWORD *)(a1 + 400);
  }
  free(v5);
  return 0;
}
