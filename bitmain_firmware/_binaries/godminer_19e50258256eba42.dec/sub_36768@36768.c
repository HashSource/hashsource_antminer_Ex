char *__fastcall sub_36768(char *a1, const json_t *a2)
{
  double v2; // d0
  char *result; // r0
  __int64 v4; // r0
  const char *v5; // r0
  char s[256]; // [sp+10h] [bp-104h] BYREF

  result = (char *)memset(s, 0, sizeof(s));
  if ( a1 && a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 6:
        strcpy(s, "false");
        break;
      case 5:
        strcpy(s, "true");
        break;
      case 3:
        v4 = json_integer_value(a2);
        snprintf(s, 0x100u, "%lld", v4);
        break;
      case 4:
        json_real_value(a2);
        snprintf(s, 0x100u, "%.2lf", v2);
        break;
      case 2:
        v5 = json_string_value(a2);
        snprintf(s, 0x100u, "%s", v5);
        break;
    }
    return strcat(a1, s);
  }
  return result;
}
