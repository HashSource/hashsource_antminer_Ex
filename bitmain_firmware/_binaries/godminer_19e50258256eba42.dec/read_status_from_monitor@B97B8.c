void __fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &dword_5ADBD8[54 * *(_DWORD *)(a2 + 264)], 0xD8u);
}
