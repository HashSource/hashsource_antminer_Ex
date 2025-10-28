int __fastcall sub_4A710(int a1, _BYTE *a2, size_t a3, int *a4, int a5)
{
  size_t v5; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r3
  char *s; // [sp+14h] [bp-18h]
  int v16; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]
  size_t n; // [sp+20h] [bp-Ch]
  char *v19; // [sp+24h] [bp-8h]

  s = off_597BFC;
  v16 = -1;
  ++optind;
  v19 = strchr(off_597BFC, 61);
  if ( v19 )
  {
    n = v19 - s;
    ++v19;
  }
  else
  {
    n = strlen(s);
  }
  for ( i = 0; ; ++i )
  {
    v5 = a3;
    if ( !*(_DWORD *)(a3 + 16 * i) )
      goto LABEL_18;
    if ( !strncmp(s, *(const char **)(a3 + 16 * i), n) )
    {
      v5 = strlen(*(const char **)(a3 + 16 * i));
      if ( n == v5 )
      {
        v16 = i;
LABEL_18:
        if ( v16 == -1 )
        {
          if ( a5 )
          {
            --optind;
            return -1;
          }
          else
          {
            if ( opterr )
            {
              v9 = (unsigned __int8)*a2;
              if ( v9 != 58 )
                sub_4A510((int)"unknown option -- %s", (int)s, v5, v9);
            }
            optopt = 0;
            return 63;
          }
        }
        else if ( *(_DWORD *)(a3 + 16 * v16 + 4) || !v19 )
        {
          if ( *(_DWORD *)(a3 + 16 * v16 + 4) == 1 || *(_DWORD *)(a3 + 16 * v16 + 4) == 2 )
          {
            if ( v19 )
            {
              optarg = (int)v19;
            }
            else if ( *(_DWORD *)(a3 + 16 * v16 + 4) == 1 )
            {
              v7 = optind++;
              optarg = *(_DWORD *)(a1 + 4 * v7);
            }
          }
          if ( *(_DWORD *)(a3 + 16 * v16 + 4) != 1 || optarg )
          {
            if ( a4 )
              *a4 = v16;
            if ( *(_DWORD *)(a3 + 16 * v16 + 8) )
            {
              **(_DWORD **)(a3 + 16 * v16 + 8) = *(_DWORD *)(a3 + 16 * v16 + 12);
              return 0;
            }
            else
            {
              return *(_DWORD *)(a3 + 16 * v16 + 12);
            }
          }
          else
          {
            if ( opterr )
            {
              v8 = (unsigned __int8)*a2;
              if ( v8 != 58 )
                sub_4A510((int)"option requires an argument -- %s", (int)s, a3, v8);
            }
            if ( *(_DWORD *)(a3 + 16 * v16 + 8) )
              optopt = 0;
            else
              optopt = *(_DWORD *)(a3 + 16 * v16 + 12);
            --optind;
            if ( *a2 == 58 )
              return 58;
            else
              return 63;
          }
        }
        else
        {
          if ( opterr && *a2 != 58 )
            sub_4A510((int)"option doesn't take an argument -- %.*s", n, (int)s, n);
          if ( *(_DWORD *)(a3 + 16 * v16 + 8) )
            optopt = 0;
          else
            optopt = *(_DWORD *)(a3 + 16 * v16 + 12);
          if ( *a2 == 58 )
            return 58;
          else
            return 63;
        }
      }
      if ( !a5 || n != 1 )
        break;
    }
LABEL_16:
    ;
  }
  if ( v16 == -1 )
  {
    v16 = i;
    goto LABEL_16;
  }
  if ( opterr && *a2 != 58 )
    sub_4A510((int)"ambiguous option -- %.*s", n, (int)s, n);
  optopt = 0;
  return 63;
}
