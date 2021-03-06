#include "SWRenderWidget.h"

using namespace RE167;

SWRenderWidget::SWRenderWidget()
: RenderWidget() 
{ 
	mswWidget = new SWWidget(this);
}

void SWRenderWidget::updateScene()
{
	mswWidget->updateScene();
}

void SWRenderWidget::resizeEvent(QResizeEvent *e)
{ 
	mswWidget->resize(e->size()); 
	resizeRenderWidgetEvent(e->size()); 
}