typedef unsigned char   undefined;

typedef unsigned short    undefined2;
typedef unsigned int    undefined4;



// WARNING: Control flow encountered bad instruction data

void FUN_08d0e9c4(void)

{
  uint in_r3;
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY) {
    software_interrupt(0xb960cb);
  }
                    // WARNING: Could not recover jumptable at 0x08d0e9c8. Too many branches
                    // WARNING: Treating indirect jump as call
  if (in_ZR || in_NG != in_OV) {
    (*(code *)(in_r3 | unaff_r5 >> 0x18))();
    return;
  }
  if (!in_CY || in_ZR) {
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_09d3f1c0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  undefined unaff_r11;
  undefined4 in_pc;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    in_pc = coprocessor_movefromRt(8,5,6,in_cr8,in_cr11);
  }
  bVar2 = in_CY;
  if (in_ZR) {
    uVar1 = param_1 >> 0x13;
    bVar2 = param_2 < uVar1 || uVar1 - param_2 < (uint)in_CY;
    in_ZR = uVar1 == param_2 + !in_CY;
  }
  if (bVar2 && !in_ZR) {
    bVar2 = SUB41((unaff_r9 << 0x19) >> 0x1f,0);
    in_ZR = (unaff_r7 & (unaff_r9 >> 7 | unaff_r9 << 0x19)) == 0;
  }
  if (bVar2) {
    *(undefined *)(unaff_r9 - 0xf4f) = unaff_r11;
  }
  else {
    coprocessor_moveto(8,4,5,in_pc,in_cr1,in_cr10);
  }
  if (!in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r7;
    unaff_r8[5] = (uint)register0x00000054;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0a8a042c) overlaps instruction at (ram,0x0a8a042a)
// 
// WARNING: Removing unreachable block (ram,0x0a8a03f0)

void FUN_0a8a0614(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  undefined *extraout_r1;
  int iVar6;
  int *piVar7;
  undefined4 *in_r3;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int unaff_r7;
  undefined4 in_r12;
  undefined4 in_cr6;
  undefined auStack_7e [126];
  
  uVar3 = *in_r3;
  uVar5 = in_r3[1];
  iVar6 = in_r3[2];
  iVar8 = in_r3[3] + 0xe6;
  *(int *)(unaff_r7 + 0x48) = iVar8;
  FUN_09d3f1c0(uVar3,uVar5);
  puVar10 = *(undefined4 **)(iVar8 + 0x78);
  piVar7 = (int *)(iVar6 + 0x73);
  iVar2 = iVar8 >> 6;
  DAT_00000070 = (undefined2)unaff_r7;
  if (iVar8 == 0) {
    *piVar7 = iVar2;
    *(int **)(iVar6 + 0x77) = piVar7;
    *(undefined4 *)(iVar6 + 0x7b) = 0;
    *(undefined4 *)(iVar6 + 0x7f) = 0x40;
    *(int *)(iVar6 + 0x83) = unaff_r7;
    *puVar10 = extraout_r1;
    puVar10[1] = 0x40;
    puVar10[2] = 0;
    puVar10[3] = unaff_r7;
    DAT_00000084 = extraout_r1;
    *(short *)(puVar10 + 10) = (short)piVar7;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(char *)(iVar8 + 0x19) = (char)piVar7;
  puVar9 = &stack0x00000230;
  if (iVar8 < 0x9f) {
    piVar7 = (int *)(uint)*(byte *)((int)puVar10 * 2);
    puVar9 = (undefined *)(int)(char)puVar9[iVar2];
    puVar4 = &DAT_0a8a05b8;
  }
  else {
    puVar10[0x13] = iVar8;
    puVar4 = extraout_r1;
  }
  *(char *)(unaff_r7 + 0x10) = (char)iVar2;
  *(short *)((int)puVar10 + 0x1a) = (short)((int)piVar7 + 0x5f);
  sVar1 = *(short *)(iVar2 + (int)piVar7 + 0x5f);
  puVar9[2] = (char)puVar9;
  iVar6 = *(int *)(sVar1 + 0x20);
  coprocessor_loadlong(4,in_cr6,in_r12);
  DAT_00000046 = (undefined2)iVar6;
  UNRECOVERED_JUMPTABLE = (code *)(int)*(char *)(*(int *)(puVar4 + -0x3c3) + iVar6);
  if ((int *)0xffffffa0 < piVar7) {
                    // WARNING: Could not recover jumptable at 0x0a8a03b2. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(iVar2,UNRECOVERED_JUMPTABLE,DAT_00000048);
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


