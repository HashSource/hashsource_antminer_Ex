int __fastcall sub_256D74(int a1, int a2)
{
  int v2; // r4
  int v3; // r0

  printf("work_n %08x%08x", *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 252));
  sub_256A60(a1 + 220, 32);
  sub_256A60(a1 + 188, 32);
  sub_256A60(a1 + 156, 32);
  sub_256A60(a1 + 140, 16);
  sub_256A60(a1 + 132, 6);
  sub_256A60(a1 + 100, 32);
  sub_256A60(a1 + 68, 32);
  sub_256A60(a1 + 36, 32);
  sub_256A60(a1 + 16, 20);
  printf(
    "%016lx%02x%02x%08x ",
    *(_DWORD *)a1,
    *(_DWORD *)(a1 + 8),
    *(_DWORD *)(a1 + 12),
    *(unsigned __int8 *)(a1 + 139));
  printf("hash ");
  sub_256A60(a2, 32);
  v2 = *(_DWORD *)a1 & 0x3F;
  v3 = target_to_diff(a2, 32);
  return printf(" core_id %02x diff %02x\n", v2, v3);
}
