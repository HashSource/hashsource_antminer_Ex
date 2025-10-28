int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r4
  __int64 v8; // r0

  if ( dword_16AC34[a1] )
    return dword_16AC34[a1];
  v3 = calloc(1u, 0x310u);
  v3[34] = a1;
  dword_16AC34[a1] = v3;
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(int))(v4 + 4))(a1);
  v5 = dword_16AC34[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 712), 0);
  v6 = queue_new(1, 0);
  v7 = dword_16AC34[a1];
  *(_DWORD *)(v5 + 664) = v6;
  LODWORD(v8) = set_chip_reg_base;
  HIDWORD(v8) = set_core_reg_base;
  *(_DWORD *)(v7 + 656) = *(_DWORD *)(v7 + 664);
  *(_DWORD *)(v7 + 148) = set_chipaddr_base;
  *(_QWORD *)(v7 + 156) = v8;
  *(_DWORD *)(v7 + 152) = set_inactive_base;
  *(_DWORD *)(v7 + 176) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 184) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 144) = 1;
  return v7;
}
