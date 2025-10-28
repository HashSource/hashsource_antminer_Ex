int __fastcall sub_256A60(int result, int a2)
{
  int v2; // [sp+4h] [bp-10h]
  int i; // [sp+Ch] [bp-8h]

  v2 = result;
  for ( i = a2 - 1; i >= 0; --i )
    result = printf("%02x", *(unsigned __int8 *)(v2 + i));
  return result;
}
