char *__fastcall sub_A5730(char *result, int a2)
{
  char *v2; // r3
  char *v3; // r3
  char v4; // [sp+Fh] [bp-Dh]
  char *v5; // [sp+10h] [bp-Ch]
  char *v6; // [sp+14h] [bp-8h]

  v6 = result;
  v5 = &result[a2 - 1];
  if ( result )
  {
    while ( v6 < v5 )
    {
      v4 = *v6;
      v2 = v6++;
      *v2 = *v5;
      v3 = v5--;
      *v3 = v4;
    }
  }
  return result;
}
