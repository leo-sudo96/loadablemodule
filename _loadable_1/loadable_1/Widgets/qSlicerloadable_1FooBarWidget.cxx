/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerloadable_1FooBarWidget.h"
#include "ui_qSlicerloadable_1FooBarWidget.h"



//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_loadable_1
class qSlicerloadable_1FooBarWidgetPrivate
  : public Ui_qSlicerloadable_1FooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerloadable_1FooBarWidget);
protected:
  qSlicerloadable_1FooBarWidget* const q_ptr;

public:
  qSlicerloadable_1FooBarWidgetPrivate(
    qSlicerloadable_1FooBarWidget& object);
  virtual void setupUi(qSlicerloadable_1FooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerloadable_1FooBarWidgetPrivate
::qSlicerloadable_1FooBarWidgetPrivate(
  qSlicerloadable_1FooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerloadable_1FooBarWidgetPrivate
::setupUi(qSlicerloadable_1FooBarWidget* widget)
{
  this->Ui_qSlicerloadable_1FooBarWidget::setupUi(widget);

 
}

//-----------------------------------------------------------------------------
// qSlicerloadable_1FooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerloadable_1FooBarWidget
::qSlicerloadable_1FooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerloadable_1FooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerloadable_1FooBarWidget);
  d->setupUi(this);
  connect(d ->PushButton , SIGNAL(clicked(QObject)), this, SLOT(voxel_tracking()));
 } 
//-----------------------------------------------------------------------------
qSlicerloadable_1FooBarWidget
::~qSlicerloadable_1FooBarWidget()
{
}

void  qSlicerloadable_1FooBarWidget::voxel_tracking()
{
    printf("test");
 }


//void  ctkPushButton::clicked(QObject)
//{
    
//}

void clicked(QObject);