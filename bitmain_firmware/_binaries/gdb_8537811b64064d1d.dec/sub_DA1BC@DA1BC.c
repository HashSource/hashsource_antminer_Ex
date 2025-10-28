int __fastcall sub_DA1BC(const char *a1, int a2, int a3)
{
  int v4; // r5
  unsigned int v5; // r4
  char *v6; // r0
  const char *v7; // r7
  int result; // r0
  char *v9; // [sp+4h] [bp-8h] BYREF

  v9 = (char *)a1;
  v4 = sub_B8974((int)a1);
  v5 = sub_53260(a3);
  v6 = v9;
  if ( !v9 )
  {
    v6 = "";
    v9 = "";
  }
  v9 = (char *)sub_93634(v6);
  v7 = sub_D0CB0((const char **)&v9);
  if ( *v9 && !isspace((unsigned __int8)*v9) )
    sub_94708("Junk at end of arguments.");
  switch ( v5 )
  {
    case 0u:
    case 2u:
      result = sub_DA0B4(v4, v5 <= 1, (int)v7, (int)&unk_478694);
      break;
    case 1u:
    case 3u:
      result = sub_DA0B4(v4, v5 <= 1, (int)v7, (int)&unk_4786DC);
      break;
    default:
      sub_94708("unsupported or unknown fork kind; cannot catch it");
  }
  return result;
}
