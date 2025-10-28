int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  int *v6; // r0
  int v7; // r4

  if ( dword_1B3C28[a1] )
    return dword_1B3C28[a1];
  v3 = calloc(1u, 0x488u);
  v3[60] = a1;
  dword_1B3C28[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_1B3C28[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 900), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 924), 0);
  v6 = queue_new(1, 0);
  v7 = dword_1B3C28[a1];
  *(_DWORD *)(v5 + 868) = v6;
  *(_DWORD *)(v7 + 856) = *(_DWORD *)(v7 + 868);
  *(_DWORD *)(v7 + 256) = set_chipaddr_base;
  *(_DWORD *)(v7 + 264) = set_chip_reg_base;
  *(_DWORD *)(v7 + 260) = set_inactive_base;
  *(_DWORD *)(v7 + 268) = set_core_reg_base;
  *(_DWORD *)(v7 + 284) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 300) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 252) = 1;
  return v7;
}
