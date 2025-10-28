int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int v4; // r0
  pthread_mutex_t *v5; // r7
  int v6; // r0
  int v7; // r4
  __int64 v8; // r0

  if ( dword_177A08[a1] )
    return dword_177A08[a1];
  v3 = calloc(1u, 0x3B8u);
  v3[52] = a1;
  dword_177A08[a1] = v3;
  v4 = dev_ctrl((int)v3);
  (*(void (__fastcall **)(int))(v4 + 4))(a1);
  v5 = (pthread_mutex_t *)dword_177A08[a1];
  pthread_mutex_init(v5 + 35, 0);
  pthread_mutex_init(v5 + 36, 0);
  v6 = queue_new(1, 0);
  v7 = dword_177A08[a1];
  v5[34].__lock = v6;
  LODWORD(v8) = set_chip_reg_base;
  HIDWORD(v8) = set_core_reg_base;
  *(_DWORD *)(v7 + 808) = *(_DWORD *)(v7 + 816);
  *(_DWORD *)(v7 + 220) = set_chipaddr_base;
  *(_QWORD *)(v7 + 228) = v8;
  *(_DWORD *)(v7 + 224) = set_inactive_base;
  *(_DWORD *)(v7 + 248) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 256) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 216) = 1;
  return v7;
}
