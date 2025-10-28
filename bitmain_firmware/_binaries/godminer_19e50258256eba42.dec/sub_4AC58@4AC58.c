int __fastcall sub_4AC58(int a1, int a2, char *a3, size_t a4, int *a5, char a6)
{
  int v7; // r2
  char *v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r3
  char *s; // [sp+Ch] [bp-20h]
  char *v17; // [sp+1Ch] [bp-10h]
  _BYTE *v18; // [sp+1Ch] [bp-10h]
  int c; // [sp+20h] [bp-Ch]
  int ca; // [sp+20h] [bp-Ch]
  int cb; // [sp+20h] [bp-Ch]
  _BOOL4 v22; // [sp+24h] [bp-8h]

  s = a3;
  if ( !a3 )
    return -1;
  if ( dword_597C08 == -1 )
    dword_597C08 = getenv("POSIXLY_CORRECT") != 0;
  if ( dword_597C08 || *s == 43 )
  {
    a6 &= ~1u;
  }
  else if ( *s == 45 )
  {
    a6 |= 2u;
  }
  if ( *s == 43 || *s == 45 )
    ++s;
  if ( !optind )
  {
    optreset = 1;
    optind = 1;
  }
  optarg = 0;
  if ( optreset )
  {
    dword_597C04 = -1;
    dword_597C00 = -1;
  }
  while ( 1 )
  {
    if ( !optreset && *off_597BFC )
      goto LABEL_46;
    optreset = 0;
    if ( a1 <= optind )
    {
      off_597BFC = &byte_35AFE0;
      if ( dword_597C04 == -1 )
      {
        if ( dword_597C00 != -1 )
          optind = dword_597C00;
      }
      else
      {
        sub_4A5A4(dword_597C00, dword_597C04, optind, a2);
        optind -= dword_597C04 - dword_597C00;
      }
      dword_597C04 = -1;
      dword_597C00 = -1;
      return -1;
    }
    off_597BFC = *(char **)(a2 + 4 * optind);
    if ( *off_597BFC == 45 && (off_597BFC[1] || strchr(s, 45)) )
      break;
    off_597BFC = &byte_35AFE0;
    if ( (a6 & 2) != 0 )
    {
      v7 = optind++;
      optarg = *(_DWORD *)(a2 + 4 * v7);
      return 1;
    }
    if ( (a6 & 1) == 0 )
      return -1;
    if ( dword_597C00 == -1 )
    {
      dword_597C00 = optind;
    }
    else if ( dword_597C04 != -1 )
    {
      sub_4A5A4(dword_597C00, dword_597C04, optind, a2);
      dword_597C00 = optind - (dword_597C04 - dword_597C00);
      dword_597C04 = -1;
    }
    ++optind;
  }
  if ( dword_597C00 != -1 && dword_597C04 == -1 )
    dword_597C04 = optind;
  if ( off_597BFC[1] )
  {
    if ( *++off_597BFC == 45 && !off_597BFC[1] )
    {
      ++optind;
      off_597BFC = &byte_35AFE0;
      if ( dword_597C04 != -1 )
      {
        sub_4A5A4(dword_597C00, dword_597C04, optind, a2);
        optind -= dword_597C04 - dword_597C00;
      }
      dword_597C04 = -1;
      dword_597C00 = -1;
      return -1;
    }
  }
LABEL_46:
  if ( a4 && *(char **)(a2 + 4 * optind) != off_597BFC && (*off_597BFC == 45 || (a6 & 4) != 0) )
  {
    v22 = 0;
    if ( *off_597BFC == 45 )
    {
      ++off_597BFC;
    }
    else if ( *off_597BFC != 58 )
    {
      v22 = strchr(s, (unsigned __int8)*off_597BFC) != 0;
    }
    c = sub_4A710(a2, s, a4, a5, v22);
    if ( c != -1 )
    {
      off_597BFC = &byte_35AFE0;
      return c;
    }
  }
  v8 = off_597BFC++;
  ca = (unsigned __int8)*v8;
  if ( ca == 58 || ca == 45 && *off_597BFC || (v17 = strchr(s, ca)) == 0 )
  {
    if ( ca == 45 && !*off_597BFC )
      return -1;
    if ( !*off_597BFC )
      v8 = (char *)++optind;
    if ( opterr )
    {
      v9 = (unsigned __int8)*s;
      if ( v9 != 58 )
        sub_4A510((int)"unknown option -- %c", ca, (int)v8, v9);
    }
    optopt = ca;
    return 63;
  }
  if ( a4 && ca == 87 && v17[1] == 59 )
  {
    if ( !*off_597BFC )
    {
      if ( a1 <= ++optind )
      {
        off_597BFC = &byte_35AFE0;
        if ( opterr )
        {
          v10 = (unsigned __int8)*s;
          if ( v10 != 58 )
            sub_4A510((int)"option requires an argument -- %c", 87, (int)&byte_35AFE0, v10);
        }
        optopt = 87;
        if ( *s == 58 )
          return 58;
        else
          return 63;
      }
      off_597BFC = *(char **)(a2 + 4 * optind);
    }
    cb = sub_4A710(a2, s, a4, a5, 0);
    off_597BFC = &byte_35AFE0;
    return cb;
  }
  v18 = v17 + 1;
  if ( *v18 != 58 )
  {
    if ( !*off_597BFC )
      ++optind;
    return ca;
  }
  optarg = 0;
  if ( *off_597BFC )
  {
    optarg = (int)off_597BFC;
LABEL_96:
    off_597BFC = &byte_35AFE0;
    ++optind;
    return ca;
  }
  if ( v18[1] == 58 )
    goto LABEL_96;
  if ( a1 > ++optind )
  {
    optarg = *(_DWORD *)(a2 + 4 * optind);
    goto LABEL_96;
  }
  off_597BFC = &byte_35AFE0;
  if ( opterr )
  {
    v11 = (unsigned __int8)*s;
    if ( v11 != 58 )
      sub_4A510((int)"option requires an argument -- %c", ca, (int)&byte_35AFE0, v11);
  }
  optopt = ca;
  if ( *s == 58 )
    return 58;
  else
    return 63;
}
