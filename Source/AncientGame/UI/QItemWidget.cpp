// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/QItemWidget.h"



void UQItemWidget::HandleOnItemChange(const FItemData& Data)
{
	if (OnItemChangeEvent.IsBound())
	{
		OnItemChangeEvent.Execute(this, Data);
	}
}

bool UQItemWidget::HandleCanItemChange(const FItemData& Data)
{

	if (ItemDetectionChangeEvent.IsBound())
	{
		return ItemDetectionChangeEvent.Execute(this, Data);
	}
	return true;
}
