int __fastcall sub_49AD0(int a1, int a2)
{
  int i; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  for ( i = 0; i <= 31; i += 4 )
    v6 += sprintf(
            (char *)(a1 + v6),
            "%02x%02x%02x%02x ",
            *(unsigned __int8 *)(a2 + i),
            *(unsigned __int8 *)(a2 + i + 1),
            *(unsigned __int8 *)(a2 + i + 2),
            *(unsigned __int8 *)(a2 + i + 3));
  return a1;
}
