int __fastcall get_fake_regio_runtime(int a1)
{
  int (**v1)(); // r0
  int v2; // r4

  if ( !dword_C264D8[a1] )
  {
    dword_C264D8[a1] = calloc(1u, 0x4D8u);
    *(_DWORD *)(dword_C264D8[a1] + 264) = a1;
    v1 = dev_ctrl();
    ((void (__fastcall *)(int))v1[1])(a1);
    pthread_mutex_init((pthread_mutex_t *)(dword_C264D8[a1] + 944), 0);
    pthread_mutex_init((pthread_mutex_t *)(dword_C264D8[a1] + 968), 0);
    v2 = dword_C264D8[a1];
    *(_DWORD *)(v2 + 908) = queue_new(1, 0);
    *(_DWORD *)(dword_C264D8[a1] + 896) = *(_DWORD *)(dword_C264D8[a1] + 908);
    *(_DWORD *)(dword_C264D8[a1] + 288) = set_chipaddr_base;
    *(_DWORD *)(dword_C264D8[a1] + 292) = set_inactive_base;
    *(_DWORD *)(dword_C264D8[a1] + 296) = set_chip_reg_base;
    *(_DWORD *)(dword_C264D8[a1] + 300) = set_core_reg_base;
    *(_DWORD *)(dword_C264D8[a1] + 316) = sync_get_chip_reg_base;
    *(_DWORD *)(dword_C264D8[a1] + 336) = sync_get_core_reg_base;
    *(_BYTE *)(dword_C264D8[a1] + 276) = 1;
  }
  return dword_C264D8[a1];
}
