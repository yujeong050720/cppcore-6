#pragma once

struct ST_SUMMARY : public core::IFormatterObject
{
    std::tstring strResult;

    void OnSync(core::IFormatter& formatter)
    {
        formatter.Sync(TEXT("Result"), strResult);
    }
};

struct ST_ANALYSIS_REPORT : public core::IFormatterObject
{
    ST_SUMMARY Summary;

    void OnSync(core::IFormatter& formatter)
    {
        formatter.Sync(TEXT("Summary"), Summary);
    }
};
