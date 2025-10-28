int __fastcall platform_get_sensor_min_pcb_temp(int a1)
{
  return *(_DWORD *)(dword_1B4A28 + 120 * a1 + 104);
}
