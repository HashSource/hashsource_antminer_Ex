void __fastcall sub_5593C(char *a1)
{
  __int64 v1; // r0
  char *v2; // r4
  size_t v3; // r4
  const char *v4; // r6
  int v5; // r0
  int v6; // r3
  _BOOL4 v7; // r1
  size_t v8; // r5
  void *v9; // r7
  int v10; // r0
  const char *v11; // r0
  char *v12; // r0
  __int64 v13; // r0
  int v14; // r0
  const char *v15; // r0
  char *s1; // [sp+Ch] [bp-20h] BYREF
  void *v17; // [sp+10h] [bp-1Ch] BYREF
  void *v18; // [sp+14h] [bp-18h] BYREF
  void *ptr; // [sp+18h] [bp-14h] BYREF
  int v20; // [sp+1Ch] [bp-10h] BYREF
  int off; // [sp+20h] [bp-Ch]
  size_t v22; // [sp+24h] [bp-8h]

  s1 = a1;
  if ( !sub_22EBE4(a1) )
    sub_22F144();
  HIDWORD(v1) = &s1;
  LODWORD(v1) = &v17;
  v20 = 0;
  off = 0;
  v22 = 0;
  sub_55418(v1);
  v2 = s1;
  if ( !s1 || !*s1 )
  {
    v4 = (const char *)v17;
    if ( !dword_48A514 )
      goto LABEL_13;
    v3 = 0;
    goto LABEL_21;
  }
  if ( !strncmp(s1, "binary", 6u) )
  {
    v3 = (size_t)(v2 + 6);
    s1 = (char *)v3;
    v12 = (char *)sub_93634(v3);
    s1 = v12;
    if ( !v12 || !*v12 )
    {
      v4 = (const char *)v17;
      if ( !dword_48A514 )
        goto LABEL_23;
      v3 = 1;
      goto LABEL_21;
    }
    sub_556D0((int *)&v18, (const char **)&s1);
    v20 = sub_14CBC4(v18);
    v3 = 1;
    if ( v18 )
      free(v18);
  }
  else
  {
    sub_556D0((int *)&ptr, (const char **)&s1);
    v20 = sub_14CC28(ptr);
    if ( ptr )
      free(ptr);
    v3 = 0;
  }
  if ( s1 && *s1 )
  {
    sub_556D0((int *)&ptr, (const char **)&s1);
    off = sub_14CC28(ptr);
    if ( ptr )
      free(ptr);
    if ( s1 )
    {
      if ( *s1 )
      {
        v13 = sub_14CC28(s1);
        v22 = v13;
        if ( (unsigned int)v13 <= off )
          sub_94708("Start must be less than end.", HIDWORD(v13));
      }
    }
  }
  v4 = (const char *)v17;
  if ( dword_48A514 )
  {
LABEL_21:
    sub_259F38("Restore file %s offset 0x%lx start 0x%lx end 0x%lx\n", v4, v20, off, v22);
    v4 = (const char *)v17;
  }
  if ( v3 )
  {
LABEL_23:
    sub_96818((int)&ptr, (int)v4, "rb");
    if ( fseek((FILE *)ptr, 0, 2) )
      sub_258B2C(v4);
    v5 = ftell((FILE *)ptr);
    if ( v5 < 0 )
      sub_258B2C(v4);
    if ( off >= (unsigned int)v5 )
      sub_94708("Start address is greater than length of binary file %s.", v4);
    v6 = v22;
    v7 = v5 > v22;
    if ( !v22 )
      v7 = 0;
    if ( v7 )
      v3 = v22;
    else
      v6 = v5;
    if ( !v7 )
      v3 = v5;
    v8 = v6;
    if ( off )
    {
      v3 -= off;
      v8 = v3;
    }
    sub_259F38("Restoring binary file %s into memory (0x%lx to 0x%lx)\n", v4, off + v20, off + v20 + v3);
    if ( fseek((FILE *)ptr, off, 0) )
      sub_258B2C(v4);
    if ( v3 )
      v9 = (void *)sub_98394(v3);
    else
      v9 = 0;
    if ( fread(v9, 1u, v3, (FILE *)ptr) != v3 )
      sub_258B2C(v4);
    v10 = sub_2304AC(off + v20, v9, v8);
    if ( v10 )
    {
      v11 = (const char *)sub_6FFC0(v10);
      sub_946D8("restore: memory write failed (%s).", v11);
    }
    if ( v9 )
      sub_339E8C(v9);
    if ( ptr )
      fclose((FILE *)ptr);
    goto LABEL_17;
  }
LABEL_13:
  sub_162E80(&ptr, v4, 0);
  if ( !ptr )
  {
    v14 = sub_2A6938(0);
    v15 = (const char *)sub_2A6948(v14);
    sub_94708("Failed to open %s: %s.", v4, v15);
  }
  if ( !sub_2AA894(ptr, 1) )
    sub_94708("'%s' is not a recognized file format.", v4);
  sub_2ADD24(ptr, sub_54D10, &v20);
  if ( ptr )
    ((void (*)(void))loc_1625D0)();
LABEL_17:
  if ( v17 )
    free(v17);
}
