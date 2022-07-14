// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"


bool UTextFileManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = false)
{
    // Set the complete file path
    SaveDirectory += "\\";
    SaveDirectory += FileName;

    if(!AllowOverWriting)
    {
        if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
        {
            return false;
        }
    }

    FString Old_Content = "";
    if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
    {
        FFileHelper::LoadFileToString(Old_Content, *SaveDirectory, FFileHelper::EHashOptions::None);
    }

    FString FinalString = Old_Content;
    for(FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}
