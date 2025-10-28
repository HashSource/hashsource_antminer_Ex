void __fastcall sub_25BF0C(int a1, const char *a2, int a3, char *format, __gnuc_va_list arg)
{
  int v5; // r5
  _BYTE *v9; // r3
  int v10; // r2
  int *v11; // r0
  char *v12; // r2
  int *v13; // r0
  int *v14; // r0
  int *v15; // r0
  char *v16; // r2
  char *v17; // r6
  int v18; // r0
  char *v19; // r0
  __int64 v20; // r0
  char *s; // [sp+8h] [bp-8h] BYREF
  int v22; // [sp+Ch] [bp-4h]
  _DWORD v23[4]; // [sp+10h] [bp+0h] BYREF
  void *v24; // [sp+20h] [bp+10h] BYREF
  int v25; // [sp+24h] [bp+14h]
  _BYTE v26[16]; // [sp+28h] [bp+18h] BYREF
  void *ptr; // [sp+38h] [bp+28h] BYREF
  int v28; // [sp+3Ch] [bp+2Ch]
  _DWORD v29[5]; // [sp+40h] [bp+30h] BYREF

  v5 = dword_48A9EC;
  s = (char *)v23;
  v22 = 0;
  LOBYTE(v23[0]) = 0;
  if ( dword_48A9EC )
  {
    if ( dword_48A9EC == 1 )
    {
      dword_48A9EC = 2;
      sub_16558(aRecursiveInter);
    }
    dword_48A9EC = 3;
    if ( write(2, aRecursiveInter, 0x1Du) != 29 )
      abort();
LABEL_36:
    exit(1);
  }
  dword_48A9EC = 1;
  sub_9326C((char **)&v24, format, arg);
  sub_93200(
    (char **)&ptr,
    "%s:%d: %s: %s\nA problem internal to GDB has been detected,\nfurther debugging may prove unreliable.",
    a2,
    a3,
    *(const char **)a1,
    (const char *)v24);
  v9 = s;
  if ( ptr == v29 )
  {
    sub_33B4B4(&s, &ptr);
    v9 = ptr;
  }
  else
  {
    if ( s == (char *)v23 )
    {
      s = (char *)ptr;
      v22 = v28;
      v23[0] = v29[0];
    }
    else
    {
      s = (char *)ptr;
      v22 = v28;
      v10 = v23[0];
      v23[0] = v29[0];
      if ( v9 )
      {
        ptr = v9;
        v29[0] = v10;
        goto LABEL_9;
      }
    }
    ptr = v29;
    v9 = v29;
  }
LABEL_9:
  v28 = 0;
  *v9 = 0;
  if ( ptr != v29 )
    sub_339E8C(ptr);
  if ( v24 != v26 )
    sub_339E8C(v24);
  if ( !dword_487668 )
  {
    fputs(s, (FILE *)stderr);
    sub_16558((const char *)&word_356660);
  }
  v24 = 0;
  v25 = 0;
  if ( sub_22F0EC() )
  {
    if ( (_BYTE)v25 )
    {
      LOBYTE(v25) = 0;
      if ( v24 == (void *)1 )
      {
        sub_22F070();
      }
      else if ( v24 )
      {
        if ( v24 == (void *)2 )
          sub_22F01C();
      }
      else
      {
        sub_22EFA4();
      }
    }
    LOBYTE(v25) = 1;
    v24 = (void *)dword_46DC04;
    sub_22F070();
  }
  if ( dword_48A9BC && dword_48A9D4 )
    sub_259B5C((int)&word_356660);
  if ( *(char **)(a1 + 8) == "ask" && dword_46DCE4 && dword_48A9BC )
  {
LABEL_39:
    if ( dword_48A9BC )
    {
      v5 = sub_25A40C("%s\nQuit this debugging session? ", s);
      goto LABEL_24;
    }
    goto LABEL_42;
  }
  v11 = (int *)sub_242FDC();
  sub_2594D8(*v11, "%s\n", s);
  v12 = *(char **)(a1 + 8);
  if ( v12 == "ask" )
  {
    if ( dword_46DCE4 )
      goto LABEL_39;
LABEL_42:
    v5 = 1;
    goto LABEL_24;
  }
  if ( v12 == "yes" )
    goto LABEL_42;
  if ( v12 != "no" )
  {
    sub_94728((int)"utils.c", 461, "bad switch");
    if ( v24 != v26 )
      sub_339E8C(v24);
    goto LABEL_64;
  }
LABEL_24:
  v13 = (int *)sub_242FDC();
  sub_256878((int)"\nThis is a bug, please report it.", *v13);
  v14 = (int *)sub_242FDC();
  sub_2594D8(*v14, "  For instructions, see:\n%s.", "<http://www.gnu.org/software/gdb/bugs/>");
  v15 = (int *)sub_242FDC();
  sub_256878((int)"\n\n", *v15);
  v16 = *(char **)(a1 + 16);
  if ( v16 == "ask" )
  {
    v17 = s;
    if ( sub_258A74(1) )
    {
      if ( dword_48A9BC )
      {
        v18 = sub_25A40C("%s\nCreate a core file of GDB? ", s);
        if ( v5 )
        {
          if ( !v18 )
            goto LABEL_36;
          goto LABEL_58;
        }
        if ( !v18 )
          goto LABEL_28;
LABEL_60:
        if ( fork() )
          goto LABEL_28;
LABEL_58:
        sub_258A48();
      }
LABEL_57:
      if ( v5 )
        goto LABEL_58;
      goto LABEL_60;
    }
  }
  else
  {
    if ( v16 != "yes" )
    {
      if ( v16 == "no" )
        goto LABEL_27;
      v20 = sub_94728((int)"utils.c", 489, "bad switch");
      if ( (_BYTE)v25 )
        ((void (__fastcall *)(void **, _DWORD))loc_25C65C)(&v24, HIDWORD(v20));
LABEL_64:
      v19 = s;
      if ( s != (char *)v23 )
        sub_339E8C(s);
      sub_339024(v19);
    }
    v17 = s;
    if ( sub_258A74(1) )
      goto LABEL_57;
  }
  sub_259508(v17);
LABEL_27:
  if ( v5 )
    goto LABEL_36;
LABEL_28:
  dword_48A9EC = 0;
  if ( (_BYTE)v25 )
  {
    LOBYTE(v25) = 0;
    if ( v24 == (void *)1 )
    {
      sub_22F070();
    }
    else if ( v24 )
    {
      if ( v24 == (void *)2 )
        sub_22F01C();
    }
    else
    {
      sub_22EFA4();
    }
  }
  if ( s != (char *)v23 )
    sub_339E8C(s);
}
