int __fastcall sub_99294(int a1)
{
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int v5; // r4
  int psu_gpio_port; // r0
  int v9; // [sp+8h] [bp-24h] BYREF
  __int16 v10; // [sp+Ch] [bp-20h] BYREF
  _DWORD *all_created_runtime; // [sp+10h] [bp-1Ch]
  void *ptr; // [sp+14h] [bp-18h]
  char *src; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]

  src = sub_98F18(off_5993BC[a1]);
  ptr = sub_98F98(off_5993BC[a1]);
  v10 = 0;
  str2hex((int)&v10, (int)ptr, 4);
  v9 = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  for ( i = 0; i < v9; ++i )
  {
    strcpy((char *)(all_created_runtime[i] + 356), src);
    *(_DWORD *)(all_created_runtime[i] + 364) = ((unsigned __int8)v10 << 8) | HIBYTE(v10);
    *(_DWORD *)(all_created_runtime[i] + 1056) = platform_is_adjustable_power();
    v1 = all_created_runtime[i];
    *(_DWORD *)(v1 + 432) = platform_get_chain_sensor_num(i);
    v2 = all_created_runtime[i];
    *(_DWORD *)(v2 + 436) = platform_get_sensor_max_chip_temp(i);
    v3 = all_created_runtime[i];
    *(_DWORD *)(v3 + 440) = platform_get_sensor_max_pcb_temp(i);
    v4 = all_created_runtime[i];
    *(_DWORD *)(v4 + 444) = platform_get_sensor_min_pcb_temp(i);
    v5 = all_created_runtime[i];
    *(_DWORD *)(v5 + 448) = platform_get_sensor_max_uneffective_count(i);
  }
  free(src);
  free(ptr);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_status(psu_gpio_port);
  return 0;
}
